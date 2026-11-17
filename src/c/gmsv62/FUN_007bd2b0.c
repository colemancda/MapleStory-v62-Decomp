/* FUN_007bd2b0 - 0x007bd2b0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007bd2b0(void)

{
  code *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar4;
  int iVar5;
  
  FUN_00879bb8();
  pcVar1 = *(code **)(unaff_EBP + 8);
  pcVar2 = *(code **)(extraout_ECX + 0x1e64);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  if (pcVar2 == pcVar1) {
    _memset((int *)(extraout_ECX + 0x1e64),0,0xc);
  }
  FUN_0060142b(0x54,0,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00457d37(pcVar1);
  FUN_004751b2(unaff_EBP + -0x20);
  if ((pcVar1 == (code *)0x3ec) || (iVar5 = extraout_ECX, pcVar1 == (code *)0x4faa8e)) {
    piVar4 = (int *)(extraout_ECX + 0x24d8);
    if (*piVar4 == 0) {
      uVar3 = FUN_007d1e08();
      *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x24dc) = uVar3;
    }
    *piVar4 = *piVar4 + 1;
    iVar5 = *(int *)(unaff_EBP + -0x10);
  }
  if ((int)pcVar1 < 0x236a6a) {
    if (((((pcVar1 != (code *)0x236a69) && (pcVar1 != (code *)0x111ae9)) &&
         (pcVar1 != (code *)0x12a189)) &&
        ((pcVar1 != (code *)0x142829 && (pcVar1 != (code *)0x205d29)))) &&
       (pcVar1 != (code *)0x21e3c9)) goto LAB_007bd3ac;
  }
  else if ((pcVar1 == (code *)0x2f9f6c) ||
          ((((pcVar1 != (code *)0x312609 && (pcVar1 != (code *)0x4dd5cc)) &&
            (pcVar1 != ptr_004f5c6a)) && (pcVar1 != (code *)0x4faa8c)))) goto LAB_007bd3ac;
  if ((pcVar1 != (code *)0x2f9f6c) && (pcVar1 != (code *)0x4faa8c)) {
    FUN_00432942(*(undefined4 *)(iVar5 + 0xd78));
  }
LAB_007bd3ac:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045ebca();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


