/* FUN_0077db4d - 0x0077db4d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0077db4d(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 0x7da:
    FUN_0076baf2();
    break;
  case 0x7db:
    FUN_0076bc09();
    break;
  case 0x7dc:
    FUN_0076bccf();
    break;
  case 0x7dd:
    FUN_0076be33();
    break;
  case 0x7de:
    FUN_0076bd6b();
    break;
  case 0x7df:
    FUN_0076becf();
    break;
  case 0x7e4:
    FUN_0076f555();
    break;
  case 0x7e5:
    FUN_0076f561();
    break;
  case 0x7e6:
    FUN_0076f658();
    break;
  case 0x7e7:
    FUN_0076f6f0();
    break;
  case 0x7e8:
    FUN_0076f6fc();
    break;
  case 0x7e9:
    FUN_0076f79c();
    break;
  case 0x7ea:
    FUN_0076f83c();
    break;
  case 0x7eb:
    FUN_0076f93c();
    break;
  case 0x7ec:
    FUN_00831b94(0x16,0xffffffff);
    break;
  case 0x7ee:
    FUN_007725fc();
    break;
  case 0x7ef:
    FUN_007726fc();
    break;
  case 0x7f0:
    FUN_007726f0();
    break;
  case 0x7f1:
    uVar1 = 1;
    goto LAB_0077dca3;
  case 0x7f2:
    uVar1 = 0;
LAB_0077dca3:
    FUN_0077277d(uVar1);
    break;
  case 0x7f3:
    FUN_0077308b();
    break;
  case 0x7f4:
    FUN_007727fc();
    break;
  case 0x7f5:
    FUN_0077292d();
    break;
  case 0x7f6:
    FUN_00772890();
    break;
  case 0x7f7:
    (**(code **)(*param_1 + 0x38))(param_1[0x202] == 0);
    break;
  case 0x7f8:
    FUN_00772aba();
    break;
  case 0x7f9:
    FUN_008320df(0xb);
    break;
  case 0x802:
    FUN_00776136();
    break;
  case 0x803:
    FUN_007762ec();
    break;
  case 0x804:
    FUN_00776271();
    break;
  case 0x805:
    uVar1 = 1;
    goto LAB_0077de2b;
  case 0x806:
    uVar1 = 0;
LAB_0077de2b:
    FUN_00776493(uVar1);
    break;
  case 0x807:
    FUN_00776523();
    break;
  case 0x808:
    FUN_007765b7();
    break;
  case 0x809:
    (**(code **)(*param_1 + 0x3c))(param_1[0x204] == 0);
    break;
  case 0x80a:
    FUN_00776813();
    break;
  case 0x80b:
    FUN_00776650();
    break;
  case 0x80c:
    FUN_00776dbd();
    break;
  case 0x816:
    FUN_0077efbd(0xffffffff);
    uVar1 = 1;
    goto LAB_0077dd43;
  case 0x817:
    FUN_0077efbd(0xffffffff);
    uVar1 = 0;
LAB_0077dd43:
    FUN_00773154(uVar1);
    break;
  case 0x818:
    FUN_0077efbd(0xffffffff);
    uVar1 = 1;
    goto LAB_0077dd69;
  case 0x819:
    FUN_0077efbd(0xffffffff);
    uVar1 = 1;
    goto LAB_0077dd8f;
  case 0x81a:
    FUN_0077efbd(0xffffffff);
    uVar1 = 0;
LAB_0077dd69:
    FUN_00773190(uVar1);
    break;
  case 0x81b:
    FUN_0077efbd(0xffffffff);
    uVar1 = 0;
LAB_0077dd8f:
    FUN_007731d0(uVar1);
    break;
  case 0x820:
  case 0x821:
  case 0x822:
  case 0x823:
  case 0x824:
    FUN_0077f2b3(0xffffffff);
    FUN_00776e40(param_2 + -0x820);
    break;
  case 0x825:
  case 0x827:
  case 0x829:
  case 0x82b:
  case 0x82d:
    FUN_0077f2b3(0xffffffff);
    FUN_00776e77(param_2 - 0x825U >> 1);
    break;
  case 0x826:
  case 0x828:
  case 0x82a:
  case 0x82c:
  case 0x82e:
    FUN_0077f2b3(0xffffffff);
    FUN_00776eb2(param_2 - 0x826U >> 1);
    break;
  case 0x866:
    FUN_0077a5cc();
    break;
  case 0x867:
    FUN_0077a8bf();
  }
  if (((param_2 == 1000) && (DAT_0097befc != 0)) && (FUN_00815de9(), DAT_0097befc != 0)) {
    (*(code *)**(undefined4 **)(DAT_0097befc + 8))(1);
  }
  FUN_0078a282(param_2);
  return;
}


