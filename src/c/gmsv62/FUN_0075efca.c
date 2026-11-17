/* FUN_0075efca - 0x0075efca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0075efca(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0x58c);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    FUN_00815de9();
    FUN_00766b93();
  }
  iVar1 = FUN_004029b9(0x570);
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_0045b90e(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    uVar3 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0045ed72(0);
    uVar3 = FUN_0045ee27(uVar3);
    iVar1 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))(uVar3);
    iVar1 = iVar1 + 0x78;
    uVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))(iVar1);
    uVar3 = FUN_0075e24f(uVar2,iVar1,uVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_007669f3(uVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


