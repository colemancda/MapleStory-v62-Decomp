/* FUN_007a4a29 - 0x007a4a29 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007a4a29(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_00879bb8();
  FUN_00817e25(unaff_EBP + -0x28,1);
  iVar1 = FUN_007c0d75(unaff_EBP + -0x28);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x6c) == 0)) {
    iVar1 = FUN_005bd6f2(unaff_EBP + -0x28);
    if (iVar1 == 0) {
      FUN_00817e25(unaff_EBP + -0x28,0);
      iVar1 = extraout_ECX + 0x1f08;
      iVar4 = FUN_0068509f(iVar1,unaff_EBP + -0x28,*(undefined4 *)(unaff_EBP + 8),
                           *(undefined4 *)(unaff_EBP + 0xc));
      if (iVar4 == 0) {
        FUN_00817e25(unaff_EBP + -0x28,1);
        uVar6 = 1;
        uVar3 = *(undefined4 *)(unaff_EBP + -0x24);
        uVar5 = *(undefined4 *)(unaff_EBP + -0x28);
        FUN_00429303(iVar1,uVar5,uVar3,1);
        uVar6 = FUN_0075a834(iVar1,uVar5,uVar3,uVar6);
        uVar3 = *(undefined4 *)(unaff_EBP + -0x24);
        uVar5 = *(undefined4 *)(unaff_EBP + -0x28);
        *(undefined4 *)(extraout_ECX + 0x23f0) = uVar6;
        FUN_0046f4ed(uVar5,uVar3);
      }
      goto LAB_007a4bfc;
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x864);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    uVar5 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00434e21(unaff_EBP + -0x10,uVar5,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x20,0x638);
    uVar3 = *puVar2;
    uVar5 = *(undefined4 *)(iVar1 + 0x38);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uVar3 = FUN_00550bc4(unaff_EBP + -0x1c,uVar5,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    uVar3 = FUN_0045e02d(unaff_EBP + -0x18,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00414f8b(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    FUN_0074d755(*(int *)(unaff_EBP + 8) + 0x14,*(int *)(unaff_EBP + 0xc) + 0x14,
                 *(undefined4 *)(unaff_EBP + -0x10));
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    puVar2 = (undefined4 *)FUN_007a4c0f(unaff_EBP + -0x14);
    uVar3 = *puVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_0074d755(*(int *)(unaff_EBP + 8) + 0x14,*(int *)(unaff_EBP + 0xc) + 0x14,uVar3);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  FUN_00414ebb();
LAB_007a4bfc:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


