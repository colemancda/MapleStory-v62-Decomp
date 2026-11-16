/* PcSerializeString - 0x50c06411 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


uint PcSerializeString(void)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined3 extraout_var;
  int *piVar3;
  size_t *psVar4;
  uint uVar5;
  int unaff_EBP;
  
                    /* 0x6411  8  PcSerializeString */
  FUN_50c10270();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  if ((*(int *)(unaff_EBP + 0xc) == 0) ||
     (puVar1 = *(undefined4 **)(unaff_EBP + 8), puVar1 == (undefined4 *)0x0)) {
    uVar5 = 0x80004003;
  }
  else {
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if ((*(uint *)(unaff_EBP + 0x10) & 0xffff0000) == 0) {
      piVar3 = (int *)FUN_50c06dac();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      psVar4 = FUN_50c085fa(piVar3);
      piVar3 = *(int **)(unaff_EBP + 0xc);
      *puVar1 = psVar4;
      if (piVar3 != (int *)0x0) {
        FUN_50c02a85(piVar3);
      }
      uVar5 = 0;
    }
    else {
      bVar2 = FUN_50c064e3();
      uVar5 = (uint)(CONCAT31(extraout_var,bVar2) == 0);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


