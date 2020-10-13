#pragma once
//
namespace vf
{
	class base
	{
	public:
		virtual void do_v() = 0;
		virtual ~base() = default;
	};
	//
	class test : public base
	{
	public:
		virtual void do_v() override final;
		//
		void do_s();
		//
		void do_i()
		{
			++a;
		}
	private:
		unsigned long long a = {};
	};
}
