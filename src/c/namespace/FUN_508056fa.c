/* FUN_508056fa - 0x508056fa in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_508056fa(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  int iVar5;
  
  FUN_5080e090();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe4;
  if (*(int *)(unaff_EBP + 0x1c) == 0) {
    iVar4 = -0x7fffbffd;
  }
  else {
    iVar3 = *(int *)(unaff_EBP + 8);
    puVar1 = (undefined4 *)(iVar3 + 0x1c);
    *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
    *(undefined4 **)(unaff_EBP + -0x18) = puVar1;
    FUN_508012a1();
    iVar4 = *(int *)(iVar3 + 0x40);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar5 = iVar3;
    if (iVar4 != 0) {
      iVar5 = *(int *)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      (**(code **)(iVar5 + 0x40))
                (iVar5,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10),
                 *(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x18),iVar3 + 0x30);
      *(undefined4 *)(iVar5 + 0x40) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
    }
    iVar4 = FUN_50803aab(*(short **)(unaff_EBP + 0x1c),(short *)(iVar5 + 0x30));
    piVar2 = (int *)(iVar3 + 0x20);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


