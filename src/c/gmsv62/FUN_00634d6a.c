/* FUN_00634d6a - 0x00634d6a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00634d6a(void)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar4 = FUN_007d1e08();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  uVar4 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + 8) = uVar4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar5 = FUN_006358ef(unaff_EBP + 8,unaff_EBP + -0x18);
  if (iVar5 != 0) {
    *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) =
         *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x10);
    iVar5 = *(int *)(unaff_EBP + -0x14);
    uVar6 = FUN_0042452b();
    *(uint *)(iVar5 + 0x10) = uVar6 & 0xff;
    iVar5 = *(int *)(unaff_EBP + -0x14);
    sVar2 = FUN_00424561();
    *(int *)(iVar5 + 0x14) = (int)sVar2;
    iVar5 = *(int *)(unaff_EBP + -0x14);
    sVar2 = FUN_00424561();
    *(int *)(iVar5 + 0x18) = (int)sVar2;
    uVar3 = FUN_00424561();
    iVar5 = *(int *)(unaff_EBP + -0x14);
    if (*(int *)(iVar5 + 0x30) == 0) {
      *(undefined4 *)(iVar5 + 0x30) = 1;
      *(uint *)(*(int *)(unaff_EBP + -0x14) + 0x28) = (uint)uVar3 + *(int *)(unaff_EBP + -0x10);
      iVar5 = *(int *)(unaff_EBP + -0x14);
      if (*(int *)(iVar5 + 0x28) == 0) {
        *(undefined4 *)(iVar5 + 0x28) = 1;
        iVar5 = *(int *)(unaff_EBP + -0x14);
      }
    }
    cVar1 = FUN_0042452b();
    *(int *)(iVar5 + 0x24) = (int)cVar1;
    iVar5 = *(int *)(unaff_EBP + -0x14);
    cVar1 = FUN_0042452b();
    *(int *)(iVar5 + 0x2c) = cVar1 * 100 + *(int *)(unaff_EBP + -0x10);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00635891(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


