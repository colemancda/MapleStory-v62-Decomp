/* FUN_5080581b - 0x5080581b in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 FUN_5080581b(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EBP;
  undefined8 uVar6;
  
  FUN_5080e090();
  puVar3 = *(undefined2 **)(unaff_EBP + 0xc);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  if (puVar3 == (undefined2 *)0x0) {
    uVar5 = 0x80004003;
  }
  else {
    iVar4 = *(int *)(unaff_EBP + 8);
    puVar1 = (undefined4 *)(iVar4 + 0x1c);
    *(undefined4 **)(unaff_EBP + 0xc) = puVar1;
    *(undefined4 **)(unaff_EBP + 8) = puVar1;
    FUN_508012a1();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(iVar4 + 0x50) != 0) {
      *(undefined1 *)(unaff_EBP + -4) = 1;
      uVar6 = (**(code **)(iVar4 + 0x50))(iVar4);
      *(undefined4 *)(iVar4 + 0x50) = 0;
      *(undefined8 *)(iVar4 + 0x48) = uVar6;
    }
    if ((*(int *)(iVar4 + 0x4c) == 0) && (*(uint *)(iVar4 + 0x48) < 0x80000000)) {
      *puVar3 = 3;
      *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(iVar4 + 0x48);
    }
    else {
      *puVar3 = 5;
      *(double *)(puVar3 + 4) = (double)*(longlong *)(iVar4 + 0x48);
    }
    piVar2 = (int *)(iVar4 + 0x20);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
    uVar5 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


