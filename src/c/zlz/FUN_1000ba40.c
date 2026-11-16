/* FUN_1000ba40 - 0x1000ba40 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __fastcall FUN_1000ba40(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1000c748;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  iVar2 = (*(code *)PTR_FUN_10012544)();
  if (iVar2 != 0) {
    iVar2 = (*(code *)PTR_FUN_10012544)();
    while (iVar2 != 0) {
      (*DAT_10016c44)(0);
      iVar2 = (*(code *)PTR_FUN_10012544)();
    }
  }
  uStack_4 = 0;
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar3 = (*DAT_10016c7c)(0,0x10010);
    puVar4 = (undefined4 *)(*DAT_10016c74)(uVar3);
    *puVar4 = 0x1000c;
    puVar4[1] = 0;
    puVar4[2] = 0x10004;
    puVar4[3] = 0;
    *(undefined4 **)(param_1 + 0x14) = puVar4 + 3;
  }
  *(undefined4 *)(param_1 + 0x14) = **(undefined4 **)(param_1 + 0x14);
  piVar1 = (int *)(param_1 + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  *unaff_FS_OFFSET = uStack_c;
  return;
}


