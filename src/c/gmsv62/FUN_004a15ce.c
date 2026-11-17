/* FUN_004a15ce - 0x004a15ce in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004a15ce(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if ((*(int *)(extraout_ECX + 0x5c) < 0) ||
     (*(int *)(extraout_ECX + 0x5c) == *(int *)(extraout_ECX + 0x48))) {
    if (*(int *)(unaff_EBP + 8) == 0) {
      iVar4 = FUN_004a2237();
      *(int *)(unaff_EBP + -0x14) = iVar4;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      iVar1 = *(int *)(extraout_ECX + 0x48);
      *(undefined4 *)(unaff_EBP + -4) = 3;
      uVar2 = FUN_0045e053(unaff_EBP + 8,0,iVar1 - iVar4);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00414f8b(uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00414ebb();
      piVar3 = (int *)FUN_0045e053(unaff_EBP + -0x1c,*(undefined4 *)(extraout_ECX + 0x48),0xffffffff
                                  );
      iVar1 = *piVar3;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(iVar1 + -4);
      }
      FUN_0045efbb(iVar1,uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00414ebb();
      FUN_00414f8b(unaff_EBP + -0x10);
      *(int *)(extraout_ECX + 0x48) = *(int *)(extraout_ECX + 0x48) - *(int *)(unaff_EBP + -0x14);
      FUN_004a2298(0,1,0);
      FUN_004b3daf();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    else {
      uVar2 = FUN_004a225d();
      *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
      *(undefined4 *)(unaff_EBP + 8) = 0;
      uVar2 = *(undefined4 *)(extraout_ECX + 0x48);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      uVar2 = FUN_0045e053(unaff_EBP + -0x10,0,uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414f8b(uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      piVar3 = (int *)FUN_0045e053(unaff_EBP + -0x18,
                                   *(int *)(unaff_EBP + -0x14) + *(int *)(extraout_ECX + 0x48),
                                   0xffffffff);
      iVar1 = *piVar3;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(iVar1 + -4);
      }
      FUN_0045efbb(iVar1,uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      FUN_00414f8b(unaff_EBP + 8);
      FUN_004a2298(0,1,0);
      FUN_004b3daf();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    FUN_00414ebb();
    uVar2 = *(undefined4 *)(unaff_EBP + -0x14);
  }
  else {
    FUN_004a1770(0);
    FUN_004a2298(0,1,0);
    FUN_004b3daf();
    uVar2 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


