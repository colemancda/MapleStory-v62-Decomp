/* FUN_5080ad75 - 0x5080ad75 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_5080ad75(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_5080e090();
  iVar2 = *(int *)(unaff_EBP + 8);
  iVar3 = *(int *)(iVar2 + 0x1c);
  bVar1 = *(byte *)(iVar3 + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff0;
  if ((bVar1 & 0x20) == 0) {
    FUN_5080ade1();
    return;
  }
  if ((*(byte *)(iVar3 + 8) & 0x40) == 0) {
    iVar2 = **(int **)(*(int *)(iVar2 + 0x1c) + 0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    (**(code **)(iVar2 + 0x30))(*(undefined4 *)(unaff_EBP + 0xc));
  }
  else {
    *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x44) + *(int *)(unaff_EBP + 0xc);
  }
  FUN_5080ade1();
  return;
}


