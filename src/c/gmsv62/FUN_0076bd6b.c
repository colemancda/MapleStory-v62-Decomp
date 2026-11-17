/* FUN_0076bd6b - 0x0076bd6b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0076bd6b(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x3c);
  iVar1 = *(int *)(iVar2 + 0x818);
  if ((iVar1 != 0) && (iVar1 != *(int *)(DAT_00978368 + 0x2088))) {
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
    uVar3 = *(undefined4 *)(iVar2 + 0x818);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_0076c53a(uVar3,unaff_EBP + -0x70);
    if ((*(int *)(unaff_EBP + -0x70) != 0) && ((iVar2 == 0 || (iVar2 == 1)))) {
      FUN_00429303();
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      FUN_00414edd(&DAT_00978474,0xffffffff);
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uVar3 = FUN_00434e21(unaff_EBP + -0x14,&DAT_00964da0,*(undefined4 *)(unaff_EBP + -0x6c));
      FUN_004e99df(unaff_EBP + -0x10,uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


