/* FUN_00834895 - 0x00834895 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00834895(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = FUN_004becbc(0x1e,0);
  if (iVar2 != 0) {
    iVar2 = FUN_004bed04();
    if (iVar2 == 0) {
      FUN_004cccd9(*(undefined4 *)(unaff_EBP + 0xc));
      FUN_0060142b(0xab,0,0);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar2 = FUN_00429303();
      *(undefined1 *)(unaff_EBP + -0x10) = *(undefined1 *)(iVar2 + 0xf8);
      FUN_00457cda(*(undefined4 *)(unaff_EBP + -0x10));
      uVar3 = FUN_007d1e08();
      FUN_00457d37(uVar3);
      puVar1 = *(undefined2 **)(unaff_EBP + 8);
      FUN_0045d247(*puVar1);
      FUN_0045d247(puVar1[2]);
      FUN_00457d37(*(undefined4 *)(unaff_EBP + 0xc));
      FUN_004751b2(unaff_EBP + -0x20);
      *(undefined4 *)(extraout_ECX + 0x208c) = 1;
      uVar3 = FUN_007d1e08();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(extraout_ECX + 0x2090) = uVar3;
      *(undefined4 *)(extraout_ECX + 0x3330) = 1;
      FUN_0045ebca();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


