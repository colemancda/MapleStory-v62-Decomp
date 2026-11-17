/* FUN_007c0a42 - 0x007c0a42 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007c0a42(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_0042459a();
  iVar2 = FUN_007c0104(uVar1);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x524) == 0) {
      switch(param_1) {
      case 0x8e:
      case 0x8f:
      case 0x90:
      case 0x91:
        FUN_007cc26b(param_1,param_2);
        break;
      case 0x92:
        FUN_007cc7cb(param_2);
        break;
      case 0x93:
        FUN_007cc987(param_2);
        break;
      case 0x94:
        FUN_007ce89a(param_2);
        break;
      case 0x95:
        uVar3 = 0xffffffff;
        uVar1 = FUN_0042459a(0xffffffff);
        FUN_0043f7b6(uVar1,uVar3);
        break;
      case 0x96:
        uVar1 = FUN_0042459a();
        FUN_0079757b(uVar1);
        break;
      case 0x99:
        FUN_00793fd6(param_2);
        break;
      case 0x9f:
        FUN_007cf155(param_2);
      }
    }
    switch(param_1) {
    case 0x8d:
      FUN_007c0bd3(param_2);
      break;
    case 0x97:
      uVar1 = FUN_0042459a();
      *(undefined4 *)(iVar2 + 0x27c8) = uVar1;
      break;
    case 0x98:
      FUN_007cec21(param_2);
      break;
    case 0x9a:
      FUN_007cedfa(param_2);
      break;
    case 0x9b:
      FUN_007ceebb(param_2);
      break;
    case 0x9c:
      FUN_007cef81(param_2);
      break;
    case 0x9d:
      FUN_007cf001(param_2);
      break;
    case 0x9e:
      FUN_007cf04c(param_2);
    }
  }
  return;
}


