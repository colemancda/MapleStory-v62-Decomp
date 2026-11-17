/* FUN_006f2a7a - 0x006f2a7a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006f2a7a(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = FUN_004becbc(500,0);
  if (iVar2 != 0) {
    FUN_0060142b(0xb9,0,0);
    uVar1 = *(undefined1 *)(extraout_ECX + 0x5a8);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00457cda(uVar1);
    FUN_00457d37(*(int *)(extraout_ECX + 0xaf8) + -1);
    FUN_004751b2(unaff_EBP + -0x1c);
    iVar2 = DAT_00978368;
    *(undefined4 *)(DAT_00978368 + 0x208c) = 1;
    uVar3 = FUN_007d1e08();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x2090) = uVar3;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


