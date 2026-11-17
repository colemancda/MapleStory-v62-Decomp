/* FUN_007c50b6 - 0x007c50b6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007c50b6(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = DAT_00978368;
  uVar2 = *(undefined4 *)(DAT_00978368 + 0x2088);
  *(int *)(unaff_EBP + -0x10) = DAT_00978368;
  *(undefined4 *)(extraout_ECX + 0xd78) = uVar2;
  if (*(int *)(iVar1 + 0x2098) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x2098) + 4;
  }
  FUN_00414edd(iVar1,0xffffffff);
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x1734) = uVar2;
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x1740) = uVar2;
  *(undefined4 *)(extraout_ECX + 0x52c) = 6;
  uVar2 = FUN_00807218();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  iVar1 = FUN_007ca153(unaff_EBP + -0x14);
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    FUN_00878dfb(iVar1);
  }
  FUN_007f113f(-(uint)(extraout_ECX != 0) & extraout_ECX + 4U);
  (**(code **)(**(int **)(unaff_EBP + -0x14) + 4))
            (1,0xfffffea2,0xffffff06,0,0,*(undefined4 *)(extraout_ECX + 0x52c),0);
  *(undefined4 *)(extraout_ECX + 0x1e64) = 0;
  *(undefined4 *)(extraout_ECX + 0x1e68) = 0;
  FUN_007c520a();
  iVar1 = FUN_00455c59(unaff_EBP + -0x1c);
  uVar2 = *(undefined4 *)(iVar1 + 4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar2 = FUN_006495c0(uVar2);
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uVar3 = FUN_0045e4b8();
  FUN_0078b670(*(undefined4 *)(unaff_EBP + -0x10),uVar3 & 1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x1cc) = &PTR_LAB_008e84a0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_0045e7c2(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


