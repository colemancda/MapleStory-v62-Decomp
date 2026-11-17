/* FUN_004eb816 - 0x004eb816 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004eb816(void)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = DAT_00978368;
  *(undefined4 *)(DAT_00978368 + 0x208c) = 0;
  uVar3 = FUN_007d1e08();
  *(undefined4 *)(iVar1 + 0x2090) = uVar3;
  cVar2 = FUN_0042452b();
  if (cVar2 == '\x01') {
    uVar3 = FUN_00679d22(unaff_EBP + -0x1c,0xcc8);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00471102(uVar3,0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else if (cVar2 == '\x02') {
    uVar3 = FUN_00679d22(unaff_EBP + -0x18,0xcc9);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00471102(uVar3,0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else if (cVar2 == '\x03') {
    uVar3 = FUN_00679d22(unaff_EBP + -0x14,0x116c);
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_00471102(uVar3,0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else if (cVar2 == '\x04') {
    uVar3 = FUN_00679d22(unaff_EBP + -0x10,0x11b8);
    *(undefined4 *)(unaff_EBP + -4) = 3;
    FUN_00471102(uVar3,0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    if (cVar2 != '\x05') goto LAB_004eb94a;
    uVar3 = FUN_00679d22(unaff_EBP + 8,0x11ba);
    *(undefined4 *)(unaff_EBP + -4) = 4;
    FUN_00471102(uVar3,0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  FUN_00414ebb();
LAB_004eb94a:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


