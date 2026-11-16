/* FUN_5080e4db - 0x5080e4db in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 FUN_5080e4db(void)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  void *this;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_5080e090();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffdc;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar2 = FUN_50810068((void *)(unaff_EBP + -0x14));
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  puVar3 = FUN_50803b07();
  *(uint **)(unaff_EBP + -0x24) = puVar3;
  if (puVar3 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    *puVar3 = (uint)&PTR_LAB_50818a58;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_5080c725(puVar3 + 2);
    *puVar3 = (uint)&PTR_LAB_50818a54;
  }
  iVar6 = *(int *)(unaff_EBP + 0x14);
  *(uint **)(iVar2 + 0x24) = puVar3;
  iVar4 = iVar6;
  if (iVar6 < 0) {
    iVar4 = 0;
  }
  puVar3 = puVar3 + 2;
  *(int *)(iVar2 + 0x2c) = iVar4;
  *(uint **)(iVar2 + 0x1c) = puVar3;
  *(uint **)(iVar2 + 0x20) = puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (0 < iVar6) {
    if ((int *)**(undefined4 **)(unaff_EBP + 0xc) == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_5080d29f((int *)**(undefined4 **)(unaff_EBP + 0xc));
    }
    FUN_5080c79e(puVar3,iVar6,3,0x80,1,0x80000000,0,0);
    if (*(int *)(unaff_EBP + 0x14) != 1) {
      *(undefined4 *)(unaff_EBP + -4) = 1;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      this = (void *)FUN_508100bc((void *)(unaff_EBP + -0x18));
      FUN_5080a780(this,*(int **)(unaff_EBP + 0x10),*(IBinding **)(unaff_EBP + -0x14),
                   (uint)(*(int *)(iVar2 + 0x2c) == 0));
      FUN_50810110(*(void **)(unaff_EBP + 8),(int *)(unaff_EBP + -0x18));
      piVar1 = *(int **)(unaff_EBP + -0x18);
      *(undefined4 *)(unaff_EBP + -0x20) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (piVar1 == (int *)0x0) {
        piVar1 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        uVar5 = *(undefined4 *)(unaff_EBP + 8);
        *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
        return uVar5;
      }
      (**(code **)(*piVar1 + 8))(piVar1);
      uVar5 = FUN_5080e67e();
      return uVar5;
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    uVar7 = FUN_5080cfc5(puVar3,0,(LPCSTR)0x0,4,0,0,0,0);
    *(uint *)(iVar2 + 0x18) = uVar7;
    uVar5 = (**(code **)(*puVar3 + 0x2c))();
    *(undefined4 *)(iVar2 + 0x28) = uVar5;
    uVar5 = FUN_5080e615();
    return uVar5;
  }
  if (iVar6 == -1) {
    *(undefined4 *)(unaff_EBP + 0x14) = 2;
  }
  else {
    *(uint *)(unaff_EBP + 0x14) = ((iVar6 != -2) - 1 & 0xfffffffe) + 3;
  }
  if ((int *)**(undefined4 **)(unaff_EBP + 0xc) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_5080d29f((int *)**(undefined4 **)(unaff_EBP + 0xc));
  }
  FUN_5080c79e(puVar3,iVar2,*(undefined4 *)(unaff_EBP + 0x14),0x80,0,0x40000000,0,0);
  uVar5 = FUN_5080e615();
  return uVar5;
}


