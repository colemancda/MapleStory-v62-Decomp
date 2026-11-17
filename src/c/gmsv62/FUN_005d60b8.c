/* FUN_005d60b8 - 0x005d60b8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005d60b8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0042459a();
  iVar2 = FUN_004308f4(uVar1);
  if (iVar2 != 0) {
    switch(param_1) {
    case 0xb2:
      FUN_005ccc1f(param_2);
      break;
    case 0xb3:
      FUN_005ccfe7(param_2);
      break;
    case 0xb5:
      FUN_005cd0ad(param_2);
      break;
    case 0xb6:
      FUN_005cd1b5(param_2);
      break;
    case 0xb7:
      FUN_005cd280(param_2);
      break;
    case 0xb8:
      FUN_005cd3f5(param_2);
      break;
    case 0xb9:
      FUN_005cd442(param_2);
      break;
    case 0xba:
      FUN_005cdea3(param_2);
      break;
    case 0xbd:
      FUN_005cdc40(param_2);
      break;
    case 0xbe:
      FUN_005cdcc6(param_2);
      break;
    case 0xbf:
      FUN_005cdf53(param_2);
      break;
    case 0xc0:
      FUN_005d082e(param_2);
    }
  }
  return;
}


