<?php
/**
 * @file
 * club_events.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function club_events_content_defaults() {
  $content = array();

  $content['doc_events'] = (object) array(
    'exported_path' => 'content/event-management',
    'title' => 'Event Management',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'documentation',
    'language' => 'und',
    'created' => '1340123523',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'doc_events',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Events include regularly scheduled meetings, conferences, committee meetings, social functions, firesides and project details. Events can be &quot;public&quot; or &quot;private&quot; - public event details are available to anyone viewing the site; private event details are available only to users who are logged in (i.e. members).</p>
<p>Events can optionally require registration. There are two registration types: Public event types allow anonymous users to register using their email address. Private event types allow registration for registered users only. You have complete control over registration types and fields collected.</p>
<p>The events feature consists of the following structural components:</p>
<ul>
	<li>
		Taxonomy Vocabulary &quot;Event Type&quot; - this defines event categories</li>
	<li>
		Content Type &quot;Event&quot; - this is the event itself</li>
	<li>
		Optional Registration capability</li>
	<li>
		&quot;Public Calendar&quot; - (voews) this defines the calendar displays for anonymous users (public events)</li>
	<li>
		&quot;Private Calendar&quot; - (views) this defines the calendar displays for authenticated users (public and private events)</li>
	<li>
		Blocks &quot;Upcoming-all&quot; and &quot;Upcoming-public&quot; - display of the next 5 upcoming events depending on whether the user is authenticated or anonymous.</li>
</ul>
<h3>
	Adding or Changing &quot;Event Types&quot;</h3>
<p class="rteindent1">(Administrator Function)&nbsp;</p>
<ol>
	<li class="rteindent1">
		Login as administrator</li>
	<li class="rteindent1">
		Select &quot;Structure &gt;&gt; Taxonomy &gt;&gt; Event Type&quot;</li>
	<li class="rteindent1">
		You can add, change or delete Event Types now. See our document &quot;Taxonomy Term Maintenance&quot; for details.</li>
</ol>
<h3>
	Adding a New Event</h3>
<h3>
	Changing an Event</h3>
<h3>
	Modifying the Calendar</h3>
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Events include regularly scheduled meetings, conferences, committee meetings, social functions, firesides and project details. Events can be "public" or "private" - public event details are available to anyone viewing the site; private event details are available only to users who are logged in (i.e. members).<br />
Events can optionally require registration. There are two registration types: Public event types allow anonymous users to register using their email address. Private event types allow registration for registered users only. You have complete control over registration types and fields collected.<br />
The events feature consists of the following structural components:</p>
<ul><li>
		Taxonomy Vocabulary "Event Type" - this defines event categories</li>
<li>
		Content Type "Event" - this is the event itself</li>
<li>
		Optional Registration capability</li>
<li>
		"Public Calendar" - (voews) this defines the calendar displays for anonymous users (public events)</li>
<li>
		"Private Calendar" - (views) this defines the calendar displays for authenticated users (public and private events)</li>
<li>
		Blocks "Upcoming-all" and "Upcoming-public" - display of the next 5 upcoming events depending on whether the user is authenticated or anonymous.</li>
</ul><p>	Adding or Changing "Event Types"<br />
(Administrator Function) </p>
<ol><li class="rteindent1">
		Login as administrator</li>
<li class="rteindent1">
		Select "Structure &gt;&gt; Taxonomy &gt;&gt; Event Type"</li>
<li class="rteindent1">
		You can add, change or delete Event Types now. See our document "Taxonomy Term Maintenance" for details.</li>
</ol><p>	Adding a New Event</p>
<p>	Changing an Event</p>
<p>	Modifying the Calendar</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

return $content;
}
