/* FUN_00500c0d - 0x00500c0d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00500c0d(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = 0;
  if (DAT_00978358 == 0) goto LAB_00500cd7;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar2 = (undefined4 *)FUN_004f1aaa(0xffffffff);
  *puVar2 = *(undefined4 *)(extraout_ECX + 0x754);
  puVar2[1] = *(undefined4 *)(extraout_ECX + 0x758);
  puVar2[2] = *(undefined4 *)(extraout_ECX + 0x75c);
  puVar2[3] = *(undefined4 *)(extraout_ECX + 0x760);
  iVar3 = FUN_006353e2();
  if (iVar3 == 0) {
    iVar3 = FUN_007ac60d(unaff_EBP + -0x10,unaff_EBP + -0x14,1);
    uVar1 = 0;
    if (-1 < iVar3) {
      FUN_00500780();
      if (*(int *)(extraout_ECX + 0x72c) == 0) {
        FUN_0060142b(0xb6,0,0);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_004751b2(unaff_EBP + -0x24);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_0045ebca();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004f1a88();
        uVar1 = 1;
        goto LAB_00500cd7;
      }
      goto LAB_00500c89;
    }
  }
  else {
LAB_00500c89:
    uVar1 = 1;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004f1a88();
LAB_00500cd7:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


