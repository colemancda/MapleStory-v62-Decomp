/* ptr_00608d9d - 0x00608d9d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_00608d9d(int *param_1,int param_2)

{
  int iVar1;
  
  switch(param_2) {
  case 2000:
    FUN_00609492();
    break;
  default:
    if (param_2 == 1) {
      iVar1 = *param_1;
    }
    else {
      if (param_2 != 2) {
        return;
      }
      iVar1 = *param_1;
    }
    (**(code **)(iVar1 + 0x34))(param_2);
    break;
  case 0x7da:
    FUN_00604b34();
    break;
  case 0x7db:
    FUN_00604c52();
    break;
  case 0x7e4:
    FUN_006076eb();
    break;
  case 0x7e5:
    FUN_00607522();
    break;
  case 0x7e6:
  case 0x7e7:
    FUN_00607cc0();
    break;
  case 0x7ee:
    FUN_00605f1c();
    break;
  case 0x7ef:
    FUN_00605c72();
    break;
  case 0x7f0:
  case 0x7f1:
    FUN_006064dc();
  }
  return;
}


