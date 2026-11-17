/* FUN_005c11da - 0x005c11da in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005c11da(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  FUN_0081622a();
  uStack_14 = 0x5c11f1;
  FUN_005c1a95();
  iVar2 = 0;
  if (0 < param_1[0x31]) {
    piVar1 = param_1 + 0x36;
    do {
      if (*piVar1 != 0) {
        FUN_005b1a45(&uStack_14,iVar2);
        (**(code **)(*param_1 + 0x54))(iVar2);
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 2;
    } while (iVar2 < param_1[0x31]);
  }
  return;
}


