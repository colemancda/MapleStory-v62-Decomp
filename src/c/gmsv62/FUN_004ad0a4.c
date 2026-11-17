/* FUN_004ad0a4 - 0x004ad0a4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004ad0a4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((1 < *(int *)(param_1 + 0x3c)) && (*(int *)(param_1 + 0x48) == 0)) {
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_008180db(-(uint)(param_1 != 0) & param_1 + 4U);
    uVar2 = FUN_004ad311(param_2,param_3);
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    uVar2 = (*DAT_0097b704)();
    *(undefined4 *)(param_1 + 0x44) = uVar2;
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 == 0x65) {
      uVar2 = 0xffffffff;
    }
    else {
      if (iVar1 != 0x66) {
        if (iVar1 == 0x67) {
          uVar2 = 0xffffffff;
        }
        else {
          if (iVar1 != 0x68) {
            if (iVar1 != 0x69) {
              return;
            }
            FUN_004ad438(param_2,param_3);
            return;
          }
          uVar2 = 1;
        }
        FUN_004ad3e0(uVar2);
        return;
      }
      uVar2 = 1;
    }
    FUN_004ad39c(uVar2);
  }
  return;
}


