/* FUN_508058d2 - 0x508058d2 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 FUN_508058d2(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    uVar5 = 0x80004003;
  }
  else {
    iVar3 = *(int *)(unaff_EBP + 8);
    puVar1 = (undefined4 *)(iVar3 + 0x1c);
    *(undefined4 **)(unaff_EBP + 8) = puVar1;
    *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
    FUN_508012a1();
    iVar4 = *(int *)(iVar3 + 0x58);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar4 != 0) {
      *(undefined1 *)(unaff_EBP + -4) = 1;
      uVar5 = (**(code **)(iVar3 + 0x58))(iVar3);
      *(undefined4 *)(iVar3 + 0x54) = uVar5;
      *(undefined4 *)(iVar3 + 0x58) = 0;
    }
    **(undefined4 **)(unaff_EBP + 0xc) = *(undefined4 *)(iVar3 + 0x54);
    piVar2 = (int *)(iVar3 + 0x20);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
    uVar5 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


