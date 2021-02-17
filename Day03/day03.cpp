#include <iostream>
using namespace std;

class VendingMachine {
  private:
    int price;
    int cash;
    
  public:
  void set_price(int _price) {
    price =_price;
  }
  void input_cash() {
    cout << "돈을 넣어주세요 : ";
    cin>>cash;
  }
  void check(){
    if(price>cash) {
      cout<<"가격 부족!"<<endl<<cash<<"원을 반환합니다."<<endl;
    } else if (price <= cash){
      cout<<"구매해주셔서 감사합니다."<<endl;
      if(price<cash){
        cout<<"잔돈은 "<<cash-price<<"원 입니다."<<endl;
      }
    }
  }
};

int main() {
  VendingMachine coke;
  coke.set_price(1000);
  coke.input_cash();
  coke.check();
}
