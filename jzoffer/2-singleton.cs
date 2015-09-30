/*************************************************************************
	> File Name: 2-singleton.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Wed 30 Sep 2015 10:16:26 PM CST
 ************************************************************************/



public sealed class Singleton1
{
	private Singleton1()
	{
	}
	private static Singleton1 instance = null;
	public static Singleton1 Instance
	{
		get
		{
			if(instance == null)
				instance = new Singleton1();
			return instance;
		}
	}
}

public sealed class Singleton2
{
	private Singleton2()
	{
	}
	private static readonly object syncObj = new object();

	private static Singleton2 instance = null;
	public static Singleton2 Instance
	{
		get 
		{
			lock(syncObj)
			{
				if(instance == null)
					instance = new Singleton2();
			}
			return instance;
		}
	}
}

public sealed class Singleton3
{
	private Singleton3()
	{
	}
	private static object syncObj = new object();

	private static Singleton3 instance = null;
	public static Singleton3 Instance
	{
		get 
		{
			if(instance == null)
			{
				lock(syncObj)
				{
					if(instance == null)
						instance = new Singleton3();
				}
			}
			return instance;
		}
	}
}

public sealed class Singleton4
{
	private Singleton4()
	{
	}
	private static Singleton4 instance = new Singleton4();
	public static Singleton4 Instance
	{
		get
		{
			return instance;
		}
	}
}


public sealed class Singleton5
{
	Singleton5()
	{
	}
	public static Singleton5 Instance
	{
		get
		{
			return Nested.instance;
		}
	}
	class Nested
	{
		static Nested()
		{
		}
		internal static readonly Singleton5 instance = new Single5();
	}
}


