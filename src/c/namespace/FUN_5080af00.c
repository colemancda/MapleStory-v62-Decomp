/* FUN_5080af00 - 0x5080af00 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_5080af00(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int unaff_EBP;
  
  FUN_5080e090();
  iVar2 = *(int *)(unaff_EBP + 8);
  iVar3 = *(int *)(iVar2 + 0x1c);
  bVar1 = *(byte *)(iVar3 + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff0;
  if ((bVar1 & 0x20) != 0) {
    if ((*(byte *)(iVar3 + 8) & 0x40) == 0) {
      uVar5 = *(undefined4 *)(unaff_EBP + 0xc);
      iVar3 = **(int **)(*(int *)(iVar2 + 0x1c) + 0x10);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      (**(code **)(iVar3 + 0x28))(uVar5,0);
      *(undefined4 *)(iVar2 + 0x40) = uVar5;
    }
    else {
      uVar4 = *(uint *)(iVar3 + 0x10);
      uVar6 = *(int *)(unaff_EBP + 0xc) + uVar4;
      if ((uVar6 < uVar4) || (*(int *)(iVar3 + 0x14) + uVar4 < uVar6)) goto LAB_5080af3d;
      *(uint *)(iVar2 + 0x40) = uVar6;
    }
    FUN_5080af81();
    return;
  }
LAB_5080af3d:
  FUN_5080af81();
  return;
}


