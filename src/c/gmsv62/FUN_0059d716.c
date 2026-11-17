/* FUN_0059d716 - 0x0059d716 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0059d716(void)

{
  char cVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  cVar1 = FUN_0042452b();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (cVar1 != '\0') {
    cVar1 = FUN_0042452b();
    if (cVar1 == '\x01') {
      uVar2 = FUN_00679d22(unaff_EBP + -0x18,0xf2f);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414f8b(uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    else if (cVar1 == '\x02') {
      uVar2 = FUN_00679d22(unaff_EBP + -0x14,0xf31);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00414f8b(uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    else {
      if (cVar1 != '\x03') goto LAB_0059d7dc;
      uVar2 = FUN_00679d22(unaff_EBP + 8,0xf30);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00414f8b(uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    FUN_00414ebb();
    FUN_00471102(unaff_EBP + -0x10,0xc);
  }
LAB_0059d7dc:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


