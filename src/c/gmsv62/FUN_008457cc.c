/* FUN_008457cc - 0x008457cc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008457cc(void)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  cVar2 = FUN_0042452b();
  if ((*(int *)(extraout_ECX + 0x314c) == 0) || (cVar2 != '\0')) {
    uVar3 = FUN_0045cdbc(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00414f8b(uVar3);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    pcVar1 = *(char **)(extraout_ECX + 0x3148);
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      FUN_00471102((undefined4 *)(extraout_ECX + 0x3148),8);
      *(undefined4 *)(extraout_ECX + 0x314c) = 1;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


