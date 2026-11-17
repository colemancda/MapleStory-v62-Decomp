/* FUN_0079364b - 0x0079364b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0079364b(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  wchar_t *pwVar2;
  uint uVar3;
  int iStack_20;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x17b0) == 0) {
    uStack_10 = 3;
    uStack_14 = 0x7fffffff;
    uStack_18 = 1000;
    iStack_20 = extraout_ECX + 0xd3c;
    *(undefined1 **)(unaff_EBP + -0x14) = auStack_1c;
    *(undefined4 *)(extraout_ECX + 0x17ac) = 0xf0;
    FUN_0041160e();
    *(int **)(unaff_EBP + -0x10) = &iStack_20;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_00486ada(&iStack_20);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_0043f900();
    uVar3 = (uint)(iVar1 == 0);
    pwVar2 = u_Skill_510_img_skill_5101007_affe_0096bfa0;
    FUN_00424e82(u_Skill_510_img_skill_5101007_affe_0096bfa0,uVar3);
    FUN_0042d941(pwVar2,uVar3);
    uStack_10 = 0x1f;
    uStack_14 = 0x4dd5cf;
    uStack_18 = 0x79372e;
    FUN_007d3e08();
  }
  else {
    uStack_10 = 3;
    uStack_14 = 0x7fffffff;
    uStack_18 = 1000;
    iStack_20 = extraout_ECX + 0xd3c;
    *(undefined1 **)(unaff_EBP + -0x10) = auStack_1c;
    *(undefined4 *)(extraout_ECX + 0x17ac) = 0x348;
    FUN_0041160e();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(int **)(unaff_EBP + -0x14) = &iStack_20;
    FUN_00486ada(&iStack_20);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_0043f900();
    uVar3 = (uint)(iVar1 == 0);
    pwVar2 = u_Skill_510_img_skill_5101007_effe_0096bfec;
    FUN_00424e82(u_Skill_510_img_skill_5101007_effe_0096bfec,uVar3);
    FUN_0042d941(pwVar2,uVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


