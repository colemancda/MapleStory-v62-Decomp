/* FUN_0085ca71 - 0x0085ca71 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0085ca71(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  uVar1 = FUN_0042452b();
  uVar1 = uVar1 & 0xff;
  FUN_0085ce6f(uVar1,1,(int)&uStack_8 + 3);
  FUN_00524f59(uVar1,1,(int)&uStack_8 + 3);
  FUN_00524f59(uVar1,1,(int)&uStack_8 + 3);
  FUN_00524f59(uVar1,1,(int)&uStack_8 + 3);
  if (uVar1 != 0) {
    FUN_004245d2(*param_1,uVar1 * 0x16);
    FUN_004245d2(param_1[1],uVar1 << 2);
    iVar3 = 0;
    while( true ) {
      FUN_0085cd50();
      iVar2 = 0;
      if (*param_1 != 0) {
        iVar2 = *(int *)(*param_1 + -4);
      }
      if (iVar2 <= iVar3) break;
      FUN_0085cbe8(iVar3);
      iVar3 = iVar3 + 1;
    }
  }
  return;
}


