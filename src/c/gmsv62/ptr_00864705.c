/* ptr_00864705 - 0x00864705 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00864705(void)

{
  func_0x00865173();
  func_0x008651b2();
  func_0x008651f1();
  func_0x00865230();
  func_0x0086526f();
  func_0x008652ae();
  func_0x008652ed();
  func_0x0086532c();
  func_0x0086536b();
  func_0x008653aa();
  func_0x008653e9();
  func_0x00865428();
  func_0x00865467();
  func_0x008654a6();
  func_0x008654e5();
  func_0x00865524();
  func_0x00865563();
  func_0x008655a2();
  func_0x008655e1();
  func_0x00865620();
  func_0x0086565f();
  func_0x0086569e();
  func_0x008656dd();
  func_0x0086571c();
  func_0x0086575b();
  func_0x0086579a();
  func_0x008657d9();
  func_0x00865818();
  func_0x00865857();
  DAT_00980a30 = (undefined4 *)FUN_004029b9(0x18);
  if (DAT_00980a30 == (undefined4 *)0x0) {
    DAT_00980a30 = (undefined4 *)0x0;
  }
  else {
    *DAT_00980a30 = &PTR_LAB_008e84a8;
    DAT_00980a30[1] = DAT_0097b988;
    DAT_0097b988 = DAT_00980a30;
    DAT_00980a30[2] = 0;
    DAT_00980a30[3] = 0;
    DAT_00980a30[5] = 0;
    *DAT_00980a30 = 0x8f36c8;
  }
  return;
}


