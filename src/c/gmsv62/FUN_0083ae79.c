/* FUN_0083ae79 - 0x0083ae79 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_0083ae79(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar2 = FUN_0045f03e(*(int *)(extraout_ECX + 0x2098) + 0x33,
                       *(undefined4 *)(*(int *)(extraout_ECX + 0x2098) + 0x35));
  if (*(int *)(unaff_EBP + 8) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00554db7(*(undefined4 *)(unaff_EBP + 8));
  }
  bVar1 = iVar3 <= (int)(uVar2 & 0xff);
  if (!bVar1) {
    uVar4 = FUN_00679d22(unaff_EBP + 8,0xc1f);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00471102(uVar4,0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return bVar1;
}


