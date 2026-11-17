/* FUN_0047ae0f - 0x0047ae0f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0047ae0f(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x98);
  *(int *)(unaff_EBP + -0x24) = extraout_ECX;
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    piVar1 = (int *)(extraout_ECX + 0x9c);
    if (*(int *)(extraout_ECX + 0x9c) != 0) {
      (*DAT_0097b6ac)(*(int *)(extraout_ECX + 0x9c));
      *piVar1 = 0;
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar4 = FUN_00679d22(unaff_EBP + -0x20,0x9c5);
    *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x1c,0x97e);
    uVar4 = **(undefined4 **)(unaff_EBP + -0x18);
    uVar3 = *puVar5;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00434e21(unaff_EBP + -0x14,uVar3,uVar4,*(undefined4 *)(unaff_EBP + 0xc));
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    (*DAT_0097b6a8)(0x80000002,*(undefined4 *)(unaff_EBP + -0x14),0,0,0,0xf,0,piVar1,
                    unaff_EBP + -0x28);
    if (*piVar1 == 0) {
      uVar4 = 0;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00434e21(unaff_EBP + -0x10,&DAT_0096477c,*(undefined4 *)(unaff_EBP + 8));
      uVar4 = FUN_0047c824(1,*(undefined4 *)(unaff_EBP + -0x10),0,0x80000000,0x7fffffff);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


