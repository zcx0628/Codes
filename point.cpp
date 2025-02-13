#include<bits/stdc++.h>
using namespace std;
template<typename T>
struct point{
	T a,b;
};
template<typename T>
point<T> operator +(const point<T> &a,const point<T> &b){
	point<T> ans;
	ans.a=a.a+b.a;
	ans.b=a.b+b.b;
	return ans;
}
template<typename T>
point<T> operator -(const point<T> &a,const point<T> &b){
	point<T> ans;
	ans.a=a.a-b.a;
	ans.b=a.b-b.b;
	return ans;
}
template<typename T>
point<T> operator *(const point<T> &a,const point<T> &b){
	point<T> ans;
	ans.a=a.a*b.a;
	ans.b=a.b*b.b;
	return ans;
}
template<typename T>
point<T> operator /(const point<T> &a,const point<T> &b){
	point<T> ans;
	ans.a=a.a/b.a;
	ans.b=a.b/b.b;
	return ans;
}
template<typename T>
point<T> operator %(const point<T> &a,const point<T> &b){
	point<T> ans;
	ans.a=a.a%b.a;
	ans.b=a.b%b.b;
	return ans;
}

template<typename T>
point<T> operator +=(const point<T> &a,const point<T> &b){
	return a+b;
}
template<typename T>
point<T> operator -=(const point<T> &a,const point<T> &b){
	return a+b;
}
template<typename T>
point<T> operator *=(const point<T> &a,const point<T> &b){
	return a+b;
}
template<typename T>
point<T> operator /=(const point<T> &a,const point<T> &b){
	return a+b;
}
template<typename T>
point<T> operator %=(const point<T> &a,const point<T> &b){
	return a+b;
}

template<typename T>
bool operator >(const point<T> &a,const point<T> &b){
	if(a.a>b.a)return true;
	else if(a.b>b.b)return true;
	else return false;
}
template<typename T>
bool operator <(const point<T> &a,const point<T> &b){
	if(a.a<b.a)return true;
	else if(a.b<b.b)return true;
	else return false;
}

template<typename T>
ostream& operator <<(ostream &out,const point<T> &a){
	out<<"("<<a.a<<","<<a.b<<")";
	return out;
}
template<typename T>
istream& operator >>(istream &in,const point<T> &a){
	in>>a.a>>a.b;
	return in;
}

