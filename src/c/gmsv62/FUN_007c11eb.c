/* FUN_007c11eb - 0x007c11eb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007c11eb(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  iVar1 = param_2[1];
  iVar2 = *param_2;
  if (iVar2 != 0 || iVar1 != 0) {
    puVar5 = *(undefined4 **)(param_1 + 0x74);
    do {
      puVar4 = puVar5;
      if (puVar4 == (undefined4 *)0x0) {
        return;
      }
      iVar3 = *(int *)((-(uint)(puVar4 != (undefined4 *)0x0) & (uint)(puVar4 + -4)) + 4);
      puVar5 = (undefined4 *)(iVar3 + 0x10U & -(uint)(iVar3 != 0));
    } while (((puVar4[2] != iVar2) || (puVar4[3] != iVar1)) &&
            ((puVar4[4] != iVar2 || (puVar4[5] != iVar1))));
    FUN_007c00e8(*puVar4);
    uVar6 = FUN_007c00e8(puVar4[1]);
    FUN_0079aa60(0,uVar6,puVar4[6]);
    FUN_007c1de4(puVar4);
  }
  return;
}


