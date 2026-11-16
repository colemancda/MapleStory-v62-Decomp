/* PcFreeUnusedLibraries - 0x50c10691 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PcFreeUnusedLibraries(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 local_18 [4];
  undefined4 *local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x10691  4  PcFreeUnusedLibraries */
  FUN_50c026fc();
  FUN_50c026fc();
  do {
    local_10 = 0;
    if (DAT_50c1ca98 != (int *)0x0) {
      for (piVar3 = DAT_50c1ca98; piVar3 < DAT_50c1ca98 + DAT_50c1ca9c; piVar3 = piVar3 + 1) {
        if (*piVar3 != 0) {
          local_c = *piVar3;
          goto LAB_50c106d8;
        }
      }
    }
    local_c = 0;
LAB_50c106d8:
    if (local_c == 0) break;
    do {
      iVar2 = local_c;
      local_14 = (undefined4 *)0x0;
      FUN_50c109ac(&DAT_50c1ca94,&local_c,local_18);
      piVar3 = (int *)local_14[5];
      if (piVar3 != (int *)0x0) {
        piVar1 = piVar3 + local_14[6];
        for (; piVar3 < piVar1; piVar3 = piVar3 + 1) {
          if (*piVar3 != 0) {
            iVar4 = *piVar3;
            goto joined_r0x50c10723;
          }
        }
      }
      iVar4 = 0;
joined_r0x50c10723:
      while (local_8 = iVar4, iVar4 != 0) {
        piVar3 = (int *)FUN_50c10949(local_14 + 4,&local_8,
                                     (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x0);
        FUN_50c1087b(&DAT_50c1cab4,piVar3);
        FUN_50c1087b(local_14 + 4,(int *)(iVar4 + 8));
        iVar4 = local_8;
      }
      iVar4 = (*(code *)local_14[3])();
      if (iVar4 == 0) {
        if (local_14[1] != 0) {
          FreeLibrary((HMODULE)*local_14);
        }
        FUN_50c1087b(&DAT_50c1ca94,(int *)(iVar2 + 8));
        local_10 = 1;
      }
      if (local_14 != (undefined4 *)0x0) {
        FUN_50c1084c((int)local_18);
      }
    } while (local_c != 0);
  } while (local_10 != 0);
  _DAT_50c1cad0 = _DAT_50c1cad0 + -1;
  if (_DAT_50c1cad0 == 0) {
    DAT_50c1cacc = 0;
  }
  _DAT_50c1cab0 = _DAT_50c1cab0 + -1;
  if (_DAT_50c1cab0 == 0) {
    DAT_50c1caac = 0;
  }
  return;
}


