/* FUN_007c06ca - 0x007c06ca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007c06ca(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBP;
  undefined4 uVar4;
  
  FUN_00879bb8();
  uVar1 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  iVar2 = *(int *)(DAT_00978368 + 0x2088);
  *(int *)(unaff_EBP + -0x14) = DAT_00978368;
  if (*(int *)(unaff_EBP + -0x10) != iVar2) {
    iVar2 = FUN_007c16cd(unaff_EBP + -0x10,0);
    if (iVar2 == 0) {
      iVar2 = FUN_004029b9(0x1c);
      *(int *)(unaff_EBP + -0x18) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_007c0847();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
      FUN_006def83();
      *(undefined4 *)(unaff_EBP + -4) = 1;
      iVar2 = FUN_004029b9(0x27f0);
      *(int *)(unaff_EBP + -0x18) = iVar2;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_007cb547(*(undefined4 *)(unaff_EBP + -0x10));
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_007c13ae(uVar1);
      uVar1 = FUN_007c1908();
      FUN_007c15b4(unaff_EBP + -0x20);
      *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x14) = uVar1;
      FUN_007c1721(unaff_EBP + -0x10,unaff_EBP + -0x20);
      iVar2 = *(int *)(unaff_EBP + -0x1c);
      uVar1 = FUN_007c1c1c();
      FUN_007c15ed(iVar2 + 0xc);
      *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x18) = uVar1;
      uVar4 = 1;
      uVar1 = FUN_0085c725(*(undefined4 *)(unaff_EBP + -0x10));
      FUN_007cb6a5(*(undefined4 *)(unaff_EBP + 8),uVar1,uVar4);
      uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x10);
      piVar3 = (int *)FUN_00429303();
      (**(code **)(*piVar3 + 0x14))(uVar1,*(undefined4 *)(unaff_EBP + 8));
      FUN_007cf3ba();
      if (DAT_0097beec != 0) {
        FUN_00815de9();
        FUN_0077fcef();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        FUN_004f6e32(0);
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


