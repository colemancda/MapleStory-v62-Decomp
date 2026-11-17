/* FUN_0051c175 - 0x0051c175 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0051c175(void)

{
  int *piVar1;
  char *pcVar2;
  int extraout_ECX;
  int iVar3;
  int unaff_EBP;
  int iVar4;
  
  FUN_00879bb8();
  iVar4 = 0;
  FUN_0060142b(0x7b,0,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00457d37(0);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  pcVar2 = (char *)(extraout_ECX + 4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar3 = 0;
  *(char **)(unaff_EBP + -0x14) = pcVar2;
  do {
    if ((*pcVar2 != pcVar2[0x1bd]) || (*(int *)(pcVar2 + 1) != *(int *)(pcVar2 + 0x1be))) {
      piVar1 = (int *)FUN_0045f1e3(0xffffffff);
      *piVar1 = iVar3;
      pcVar2 = *(char **)(unaff_EBP + -0x14);
    }
    iVar3 = iVar3 + 1;
    pcVar2 = pcVar2 + 5;
    *(char **)(unaff_EBP + -0x14) = pcVar2;
  } while (iVar3 < 0x59);
  if ((*(int *)(unaff_EBP + -0x10) != 0) &&
     (iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + -4), iVar3 != 0)) {
    FUN_00457d37(iVar3);
    if (0 < iVar3) {
      do {
        FUN_00457d37(*(undefined4 *)(*(int *)(unaff_EBP + -0x10) + iVar4 * 4));
        FUN_004b654f(unaff_EBP + -0x24);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
    FUN_004751b2(unaff_EBP + -0x24);
    FUN_0051c0f2();
    FUN_00879c20(extraout_ECX + 0x1c1,extraout_ECX + 4,0x1bd);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00445a30();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045ebca();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


