/* FUN_006161c8 - 0x006161c8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006161c8(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 400) != 0) {
    iVar2 = FUN_007d1e08();
    if (499 < iVar2 - *(int *)(extraout_ECX + 0x194)) {
      uVar3 = 0;
      goto LAB_006162e6;
    }
  }
  FUN_0060142b(0x8f,0,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00457fa0(extraout_ECX + 0x90,8);
  iVar2 = FUN_00429303();
  *(undefined1 *)(unaff_EBP + -0x10) = *(undefined1 *)(iVar2 + 0xf8);
  FUN_00457cda(*(undefined4 *)(unaff_EBP + -0x10));
  uVar3 = FUN_007d1e08();
  FUN_00457d37(uVar3);
  puVar1 = *(undefined2 **)(unaff_EBP + 8);
  FUN_0045d247(*puVar1);
  FUN_0045d247(puVar1[2]);
  FUN_00457d37(*(undefined4 *)(unaff_EBP + 0xc));
  uVar3 = FUN_004cd670(extraout_ECX + 0x130,*(undefined4 *)(extraout_ECX + 0x138));
  FUN_00457cda(uVar3);
  uVar3 = FUN_004cd670(extraout_ECX + 0x148,*(undefined4 *)(extraout_ECX + 0x150));
  FUN_00457cda(uVar3);
  uVar3 = FUN_004cd670(extraout_ECX + 0x13c,*(undefined4 *)(extraout_ECX + 0x144));
  FUN_00457cda(uVar3);
  FUN_004751b2(unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045ebca();
  uVar3 = 1;
LAB_006162e6:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


