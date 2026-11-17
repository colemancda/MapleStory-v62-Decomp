/* FUN_0074d8fb - 0x0074d8fb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0074d8fb(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar2;
  uint uStack_24;
  int iStack_20;
  int *piStack_1c;
  
  FUN_00879bb8();
  piStack_1c = *(int **)(extraout_ECX + 0x440);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int **)(unaff_EBP + -0x14) = piStack_1c;
  if (piStack_1c != (int *)0x0) {
    iStack_20 = 0x74d925;
    (**(code **)(*piStack_1c + 4))();
  }
  uVar2 = *(uint *)(unaff_EBP + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(uint *)(unaff_EBP + 0x14) = uVar2;
  if (uVar2 == 0) {
    *(undefined4 *)(unaff_EBP + 0x14) = 0x7fffffff;
  }
  uStack_24 = unaff_EBP - 0x10;
  piStack_1c = (int *)(~-(uint)(uVar2 != 0) & uStack_24);
  iStack_20 = 0;
  *(uint **)(unaff_EBP + -0x18) = &uStack_24;
  FUN_00756efd(&uStack_24,7);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uVar1 = FUN_00449713();
  iStack_20 = FUN_00757d85(5,*(undefined4 *)(unaff_EBP + 0x14),8,uVar1);
  iStack_20 = iStack_20 + 8;
  uStack_24 = uVar2;
  if (uVar2 == 0) {
    uStack_24 = *(int *)(unaff_EBP + -0x10) + 5;
  }
  piStack_1c = (int *)0xffffffff;
  FUN_0074d72a(1);
  piStack_1c = (int *)0x0;
  iStack_20 = 0;
  uStack_24 = 0;
  FUN_0075699b(unaff_EBP + 0x14,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  piStack_1c = *(int **)(unaff_EBP + 0x14);
  if (piStack_1c != (int *)0x0) {
    iStack_20 = 0x74d9b6;
    (**(code **)(*piStack_1c + 8))();
  }
  if (uVar2 == 0) {
    uVar2 = 0x7fffffff;
  }
  piStack_1c = (int *)0x0;
  iStack_20 = 1;
  *(uint **)(unaff_EBP + 0xc) = &uStack_24;
  FUN_00756efd(&uStack_24,7);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uVar1 = FUN_00449713();
  FUN_00757d85(5,uVar2,8,uVar1);
  piStack_1c = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_1c != (int *)0x0) {
    iStack_20 = 0x74d9fb;
    (**(code **)(*piStack_1c + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_1c = (int *)0x74da07;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


