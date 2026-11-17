/* FUN_007933cc - 0x007933cc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007933cc(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  wchar_t *extraout_ECX_00;
  int unaff_EBP;
  uint uVar3;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  int iStack_1c;
  wchar_t *pwStack_18;
  undefined4 uStack_14;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x524) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_14 = 0xffffffff;
    if (*(int *)(unaff_EBP + 8) == 0) {
      pwStack_18 = u_Effect_BasicEff_img_TransformOnL_0096bf18;
    }
    else {
      pwStack_18 = u_Effect_BasicEff_img_Transform_0096bf64;
    }
    iStack_1c = 0x79340b;
    FUN_004184ca();
    uStack_14 = 5;
    iStack_1c = extraout_ECX + 0xd3c;
    *(wchar_t ***)(unaff_EBP + 8) = &pwStack_18;
    uStack_20 = 0x79341f;
    pwStack_18 = extraout_ECX_00;
    FUN_0041160e();
    iStack_1c = 0;
    uStack_20 = 0;
    *(undefined1 **)(unaff_EBP + -0x14) = auStack_24;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00486ada(auStack_24);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar1 = FUN_0043f900();
    uVar3 = (uint)(iVar1 == 0);
    uVar2 = FUN_00411641(uVar3);
    FUN_00424e82(uVar2);
    FUN_0042b613(uVar2,uVar3);
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      uStack_14 = 100;
      pwStack_18 = u_Transform_0096bf04;
      iStack_1c = 0x79346a;
      FUN_007d4073();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uStack_14 = 0x793478;
    FUN_00402676();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


