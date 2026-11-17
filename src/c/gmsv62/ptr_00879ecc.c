/* ptr_00879ecc - 0x00879ecc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_00879ecc(int param_1,int param_2)

{
  int unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + 0x10 + param_1 * 4) = *(undefined4 *)(unaff_ESI + 0x10 + param_1 * 4);
  *(undefined4 *)(unaff_EDI + 0xc + param_1 * 4) = *(undefined4 *)(unaff_ESI + 0xc + param_1 * 4);
  *(undefined4 *)(unaff_EDI + 8 + param_1 * 4) = *(undefined4 *)(unaff_ESI + 8 + param_1 * 4);
  *(undefined4 *)(unaff_EDI + 4 + param_1 * 4) = *(undefined4 *)(unaff_ESI + 4 + param_1 * 4);
                    /* WARNING: Could not recover jumptable at 0x00879ef7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&switchD_00879dd7::switchdataD_00879f00)[param_2])();
  return;
}


