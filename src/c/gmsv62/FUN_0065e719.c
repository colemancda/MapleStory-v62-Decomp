/* FUN_0065e719 - 0x0065e719 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0065e719(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0xb;
  *(undefined ***)(extraout_ECX + 0x533) = &PTR_FUN_008ed1bc;
  FUN_004b978b();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  *(undefined ***)(extraout_ECX + 0x50f) = &PTR_FUN_008ed4ec;
  FUN_0065e684();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  *(undefined ***)(extraout_ECX + 0x49f) = &PTR_FUN_008ed4f0;
  FUN_0065e64a();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  *(undefined ***)(extraout_ECX + 0x48b) = &PTR_FUN_008ed4f4;
  FUN_0065e610();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  *(undefined ***)(extraout_ECX + 0x477) = &PTR_FUN_008ed4f8;
  FUN_0065e5d6();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  *(undefined ***)(extraout_ECX + 0x45b) = &PTR_FUN_008ed4fc;
  FUN_0065e585();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *(undefined ***)(extraout_ECX + 0x443) = &PTR_FUN_008ed500;
  FUN_004b930d();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *(undefined ***)(extraout_ECX + 0x42b) = &PTR_FUN_008ed504;
  FUN_004b9178();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(undefined ***)(extraout_ECX + 0x413) = &PTR_FUN_008ecb0c;
  FUN_005d10de();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(undefined ***)(extraout_ECX + 0x3fb) = &PTR_FUN_008ecb0c;
  FUN_005d10de();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087a0b8(extraout_ECX + 0x3e3,4,6,&LAB_0065e859);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0087a0b8(extraout_ECX + 0x25b,8,0x31,FUN_00449716);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0087a0b8(extraout_ECX + 0xd3,8,0x31,FUN_00449716);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


