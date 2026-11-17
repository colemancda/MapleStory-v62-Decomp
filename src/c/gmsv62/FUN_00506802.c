/* FUN_00506802 - 0x00506802 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00506802(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0xe2:
    FUN_005068ab(param_2);
    break;
  case 0xe3:
    FUN_00506a22(param_2);
    break;
  case 0xe4:
    FUN_00506a52(param_2);
    break;
  case 0xe5:
    uVar1 = 1;
    goto LAB_0050684d;
  case 0xe6:
    uVar1 = 0;
LAB_0050684d:
    FUN_00506a91(uVar1,param_2);
    break;
  case 0xe7:
    FUN_00506cec(param_2);
    break;
  case 0xe8:
    FUN_00506e5d(param_2);
    break;
  case 0xe9:
    FUN_00506fd0(param_2);
    break;
  default:
    FUN_004eb26f(param_1,param_2);
  }
  return;
}


