/* FUN_005248c7 - 0x005248c7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005248c7(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 0xc);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  if (0 < iVar2) {
    *(undefined4 **)(unaff_EBP + -0x14) = (undefined4 *)(extraout_ECX + 0x10);
    FUN_00402aba();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (0 < iVar2) {
      *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + 8);
      *(int *)(unaff_EBP + 8) = iVar2;
      do {
        puVar4 = (undefined4 *)FUN_004f1aaa(0xffffffff);
        puVar3 = *(undefined4 **)(unaff_EBP + 0xc);
        *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 0x10;
        piVar1 = (int *)(unaff_EBP + 8);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        *puVar4 = *puVar3;
        puVar4[1] = puVar3[1];
        puVar4[2] = puVar3[2];
        puVar4[3] = puVar3[3];
      } while (iVar2 != 0);
    }
    FUN_0052493b();
    piVar1 = (int *)(extraout_ECX + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(extraout_ECX + 0x10) = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


