/* FUN_005068ab - 0x005068ab in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005068ab(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_30;
  uint uStack_2c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  uStack_2c = 0x5068c8;
  uVar3 = FUN_0042452b();
  uVar3 = uVar3 & 0xff;
  uStack_2c = 0x5068d2;
  uVar4 = FUN_00424561();
  *(uint *)(unaff_EBP + -0x14) = uVar4 & 0xffff;
  uStack_2c = 0x5068df;
  uVar4 = FUN_00424561();
  *(uint *)(unaff_EBP + -0x1c) = uVar4 & 0xffff;
  uStack_2c = 0x5068ec;
  uVar4 = FUN_00424561();
  *(uint *)(unaff_EBP + -0x20) = uVar4 & 0xffff;
  uStack_2c = 0x5068f9;
  uVar4 = FUN_00424561();
  *(uint *)(unaff_EBP + -0x10) = uVar4 & 0xffff;
  uStack_2c = 0x506906;
  uVar4 = FUN_00424561();
  *(uint *)(unaff_EBP + -0x28) = uVar4 & 0xffff;
  uStack_2c = 0x506913;
  uVar4 = FUN_00424561();
  *(uint *)(unaff_EBP + -0x24) = uVar4 & 0xffff;
  uStack_2c = 0x506921;
  FUN_0050666a();
  uStack_30 = 0x50692d;
  uStack_2c = uVar3;
  FUN_006f2c34();
  if ((DAT_00978358 != 0) && (DAT_00979274 != 0)) {
    *(uint *)(DAT_00978358 + 0x16fc) = uVar3;
    uStack_2c = 0x506954;
    FUN_007b02be();
    uStack_2c = *(undefined4 *)(unaff_EBP + -0x1c);
    uStack_30 = *(undefined4 *)(unaff_EBP + -0x14);
    FUN_006f2be9();
    uStack_2c = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_30 = *(undefined4 *)(unaff_EBP + -0x20);
    FUN_006f2c07(uVar3);
    uStack_2c = *(undefined4 *)(unaff_EBP + -0x24);
    uStack_30 = *(undefined4 *)(unaff_EBP + -0x28);
    FUN_006f2c07(uVar3 == 0);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    while( true ) {
      iVar1 = *(int *)(unaff_EBP + -0x18);
      iVar2 = *(int *)(iVar1 + 0x728);
      if ((iVar2 == 0) || (*(uint *)(iVar2 + -4) <= *(uint *)(unaff_EBP + -0x10))) break;
      uStack_2c = 0x5069ae;
      uVar3 = FUN_0042452b();
      *(uint *)(unaff_EBP + -0x1c) = uVar3 & 0xff;
      uStack_2c = *(int *)(unaff_EBP + -0x14) + 4 + *(int *)(iVar1 + 0x728);
      *(undefined4 *)(unaff_EBP + 8) = 0;
      uStack_30 = 0x5069cf;
      FUN_00414f8b();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (((0 < *(int *)(unaff_EBP + -0x1c)) && (*(char **)(unaff_EBP + 8) != (char *)0x0)) &&
         (**(char **)(unaff_EBP + 8) != '\0')) {
        uStack_2c = *(undefined4 *)(unaff_EBP + -0x1c);
        *(undefined4 **)(unaff_EBP + -0x28) = &uStack_30;
        uStack_30 = extraout_ECX_00;
        FUN_00450368(unaff_EBP + 8);
        FUN_006f0280();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      uStack_2c = 0x506a08;
      FUN_00414ebb();
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x10;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


