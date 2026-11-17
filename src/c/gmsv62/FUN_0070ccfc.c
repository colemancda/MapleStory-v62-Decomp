/* FUN_0070ccfc - 0x0070ccfc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0070ccfc(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = DAT_00978368;
  if (DAT_00978368 != 0) {
    iVar2 = FUN_004becbc(200,0);
    if (iVar2 != 0) {
      FUN_0060142b(0xce,0,0);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00457cda(*(undefined4 *)(unaff_EBP + 8));
      FUN_0045d247(*(undefined4 *)(unaff_EBP + 0xc));
      FUN_00457d37(*(undefined4 *)(extraout_ECX + 100));
      FUN_004751b2(unaff_EBP + -0x1c);
      uVar3 = 1;
      *(undefined4 *)(iVar1 + 0x208c) = 1;
      uVar4 = FUN_007d1e08();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x2090) = uVar4;
      FUN_0045ebca();
      goto LAB_0070cd93;
    }
  }
  uVar3 = 0;
LAB_0070cd93:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


