/* FUN_00578ead - 0x00578ead in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00578ead(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *extraout_ECX;
  char cVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_004de520();
  extraout_ECX[0x33] = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[0x34] = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x35] = 0;
  extraout_ECX[0x36] = 0;
  extraout_ECX[0x37] = 0;
  iVar1 = extraout_ECX[0x34];
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *extraout_ECX = &PTR_FUN_008ec030;
  cVar4 = ((-1 < iVar1) - 1U & 0x3f) + 0x21;
  extraout_ECX[1] = &PTR_FUN_008ebfe4;
  extraout_ECX[2] = &PTR_FUN_008ebfe0;
  FUN_004de5cc(0xff,0xff,0,0xffffff6b,cVar4,0,cVar4,0,cVar4,(-(uint)(iVar1 < 0) & 100) + 300,0,300);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar1 = extraout_ECX[0x34];
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar1 < 0) {
    puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 0xc,0x51b);
    uVar2 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_0041354c(unaff_EBP + -0x10,uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 4;
  }
  else {
    puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x51c);
    uVar2 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_0041354c(unaff_EBP + -0x10,uVar2,*(undefined4 *)(unaff_EBP + 0xc));
    *(undefined1 *)(unaff_EBP + -4) = 4;
  }
  FUN_00402676();
  FUN_004de636(0x96,0x39,*(undefined4 *)(unaff_EBP + -0x10),0xd2 - extraout_ECX[0x34],1,0);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


