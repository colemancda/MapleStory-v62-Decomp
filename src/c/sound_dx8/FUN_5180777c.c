/* FUN_5180777c - 0x5180777c in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * __cdecl FUN_5180777c(undefined4 *param_1,undefined4 *param_2)

{
  short sVar1;
  uint uVar2;
  size_t *psVar3;
  ushort uVar4;
  short *psVar5;
  short *psVar6;
  ushort *puVar7;
  undefined1 local_18 [16];
  undefined4 local_8;
  
  local_8 = 0;
  if ((undefined4 *)*param_2 == (undefined4 *)0x0) {
    psVar5 = (short *)0x0;
  }
  else {
    psVar5 = *(short **)*param_2;
  }
  if (psVar5 == (short *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(psVar5 + -2) >> 1;
  }
  psVar6 = psVar5 + (uVar2 - 1);
  if (psVar5 <= psVar6) {
    do {
      sVar1 = *psVar6;
      if (((sVar1 == 0x2e) || (sVar1 == 0x2f)) || (sVar1 == 0x5c)) break;
      psVar6 = psVar6 + -1;
    } while (psVar5 <= psVar6);
    if ((psVar5 <= psVar6) && (*psVar6 == 0x2e)) {
      puVar7 = (ushort *)(psVar6 + 1);
      psVar3 = FUN_51802bf3(0,(int)((int)psVar5 + (uVar2 * 2 - (int)puVar7)) >> 1);
      if (psVar3 != (size_t *)0x0) {
        for (; uVar4 = *puVar7, uVar4 != 0; puVar7 = puVar7 + 1) {
          if ((0x60 < uVar4) && (uVar4 < 0x7b)) {
            uVar4 = uVar4 - 0x20;
          }
          *(ushort *)psVar3 = uVar4;
          psVar3 = (size_t *)((int)psVar3 + 2);
        }
        FUN_51809252();
        return param_1;
      }
      FUN_51802c9b(local_18,0x8007000e,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_18,(ThrowInfo *)&DAT_5181a2e0);
    }
  }
  *param_1 = 0;
  return param_1;
}


