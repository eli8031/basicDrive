float myVariable;

// "when Controller1 Axis2 changed" hat block
void onevent_Controller1Axis2Changed_0() {
  while (true) {
    if (0.0 < Controller1.Axis2.position()) {
      Motor1.spin(forward);
      Motor2.spin(reverse);
    }
    if (0.0 == Controller1.Axis2.position()) {
      Motor1.stop();
      Motor2.stop();
    }
    if (0.0 > Controller1.Axis2.position()) {
      Motor2.spin(forward);
      Motor1.spin(reverse);
    }
  wait(5, msec);
  }
}

// "when started" hat block
int whenStarted1() {
  return 0;
}


int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  // register event handlers
  Controller1.Axis2.changed(onevent_Controller1Axis2Changed_0);

  wait(15, msec);
  whenStarted1();
}
