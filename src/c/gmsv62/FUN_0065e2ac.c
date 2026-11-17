/* FUN_0065e2ac - 0x0065e2ac in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0065e2ac(void)

{
  int extraout_ECX;
  void *unaff_retaddr;
  
  FUN_00879bb8();
  FUN_0087b2f0(extraout_ECX + 0xd3,8,0x31,&LAB_004c252c,FUN_00449716);
  FUN_0087b2f0(extraout_ECX + 0x25b,8,0x31,&LAB_004c252c,FUN_00449716);
  FUN_0087b2f0(extraout_ECX + 0x3e3,4,6,&LAB_0065e853,&LAB_0065e859);
  *(undefined4 *)(extraout_ECX + 0x3ff) = 0;
  *(undefined4 *)(extraout_ECX + 0x403) = 0x1f;
  *(undefined4 *)(extraout_ECX + 0x407) = 0;
  *(undefined ***)(extraout_ECX + 0x3fb) = &PTR_FUN_008ecb0c;
  *(undefined4 *)(extraout_ECX + 0x40b) = 100;
  *(undefined4 *)(extraout_ECX + 0x40f) = 0x18;
  *(undefined4 *)(extraout_ECX + 0x417) = 0;
  *(undefined4 *)(extraout_ECX + 0x41b) = 0x1f;
  *(undefined4 *)(extraout_ECX + 0x41f) = 0;
  *(undefined ***)(extraout_ECX + 0x413) = &PTR_FUN_008ecb0c;
  *(undefined4 *)(extraout_ECX + 0x423) = 100;
  *(undefined4 *)(extraout_ECX + 0x427) = 0x18;
  *(undefined4 *)(extraout_ECX + 0x42f) = 0;
  *(undefined4 *)(extraout_ECX + 0x433) = 0x1f;
  *(undefined4 *)(extraout_ECX + 0x437) = 0;
  *(undefined ***)(extraout_ECX + 0x42b) = &PTR_FUN_008ed504;
  *(undefined4 *)(extraout_ECX + 0x43b) = 100;
  *(undefined4 *)(extraout_ECX + 0x43f) = 0x18;
  *(undefined4 *)(extraout_ECX + 0x447) = 0;
  *(undefined4 *)(extraout_ECX + 1099) = 0x1f;
  *(undefined4 *)(extraout_ECX + 0x44f) = 0;
  *(undefined ***)(extraout_ECX + 0x443) = &PTR_FUN_008ed500;
  *(undefined4 *)(extraout_ECX + 0x453) = 100;
  *(undefined4 *)(extraout_ECX + 0x457) = 0x18;
  *(undefined4 *)(extraout_ECX + 0x45f) = 0;
  *(undefined4 *)(extraout_ECX + 0x463) = 0x1f;
  *(undefined4 *)(extraout_ECX + 0x467) = 0;
  *(undefined ***)(extraout_ECX + 0x45b) = &PTR_FUN_008ed4fc;
  *(undefined4 *)(extraout_ECX + 0x46b) = 100;
  *(undefined4 *)(extraout_ECX + 0x46f) = 0x18;
  *(undefined4 *)(extraout_ECX + 0x47f) = 0;
  *(undefined4 *)(extraout_ECX + 0x483) = 0;
  *(undefined4 *)(extraout_ECX + 0x487) = 0;
  *(undefined ***)(extraout_ECX + 0x477) = &PTR_FUN_008ed4f8;
  *(undefined4 *)(extraout_ECX + 0x493) = 0;
  *(undefined4 *)(extraout_ECX + 0x497) = 0;
  *(undefined4 *)(extraout_ECX + 0x49b) = 0;
  *(undefined ***)(extraout_ECX + 0x48b) = &PTR_FUN_008ed4f4;
  *(undefined4 *)(extraout_ECX + 0x4a7) = 0;
  *(undefined4 *)(extraout_ECX + 0x4ab) = 0;
  *(undefined4 *)(extraout_ECX + 0x4af) = 0;
  *(undefined ***)(extraout_ECX + 0x49f) = &PTR_FUN_008ed4f0;
  *(undefined4 *)(extraout_ECX + 0x513) = 0;
  *(undefined4 *)(extraout_ECX + 0x517) = 0x1f;
  *(undefined4 *)(extraout_ECX + 0x51b) = 0;
  *(undefined ***)(extraout_ECX + 0x50f) = &PTR_FUN_008ed4ec;
  *(undefined4 *)(extraout_ECX + 0x51f) = 100;
  *(undefined4 *)(extraout_ECX + 0x523) = 0x18;
  *(undefined4 *)(extraout_ECX + 0x537) = 0;
  *(undefined4 *)(extraout_ECX + 0x53b) = 0x1f;
  *(undefined4 *)(extraout_ECX + 0x53f) = 0;
  *(undefined ***)(extraout_ECX + 0x533) = &PTR_FUN_008ed1bc;
  FUN_004bbc85(100);
  ExceptionList = unaff_retaddr;
  return extraout_ECX;
}


